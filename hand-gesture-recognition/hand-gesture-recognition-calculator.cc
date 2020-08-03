#include <cmath>
#include <stdlib.h>
<<<<<<< HEAD
#include <iostream>
#include <cstring>
=======
>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
#include "mediapipe/framework/calculator_framework.h"
#include "mediapipe/framework/formats/landmark.pb.h"
#include "mediapipe/framework/formats/rect.pb.h"

namespace mediapipe
{
<<<<<<< HEAD
std::string text = "";
=======

>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
namespace
{
constexpr char normRectTag[] = "NORM_RECT";
constexpr char normalizedLandmarkListTag[] = "NORM_LANDMARKS";
<<<<<<< HEAD
constexpr char recognizedHandGestureTag[] = "RECOGNIZED_HAND_GESTURE";
=======
>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
}
/*
// Graph config:
//
// node {
//   calculator: "HandGestureRecognitionCalculator"
//   input_stream: "NORM_LANDMARKS:scaled_landmarks"
//   input_stream: "NORM_RECT:hand_rect_for_next_frame"
// }
*/
class HandGestureRecognitionCalculator : public CalculatorBase
{
public:
    static ::mediapipe::Status GetContract(CalculatorContract *cc);
    ::mediapipe::Status Open(CalculatorContext *cc) override;

    ::mediapipe::Status Process(CalculatorContext *cc) override;

private:
<<<<<<< HEAD

=======
>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
    float get_Euclidean_DistanceAB(float a_x, float a_y, float b_x, float b_y)
    {
        float dist = std::pow(a_x - b_x, 2) + pow(a_y - b_y, 2);
        return std::sqrt(dist);
    }
};

REGISTER_CALCULATOR(HandGestureRecognitionCalculator);

::mediapipe::Status HandGestureRecognitionCalculator::GetContract(
    CalculatorContract *cc)
{
    RET_CHECK(cc->Inputs().HasTag(normalizedLandmarkListTag));
    cc->Inputs().Tag(normalizedLandmarkListTag).Set<mediapipe::NormalizedLandmarkList>();

    RET_CHECK(cc->Inputs().HasTag(normRectTag));
    cc->Inputs().Tag(normRectTag).Set<NormalizedRect>();
<<<<<<< HEAD
	
	RET_CHECK(cc->Outputs().HasTag(recognizedHandGestureTag));
    cc->Outputs().Tag(recognizedHandGestureTag).Set<std::string>();
	
=======

>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
    return ::mediapipe::OkStatus();
}

::mediapipe::Status HandGestureRecognitionCalculator::Open(
    CalculatorContext *cc)
{
    cc->SetOffset(TimestampDiff(0));
    return ::mediapipe::OkStatus();
}

::mediapipe::Status HandGestureRecognitionCalculator::Process(
    CalculatorContext *cc)
{
<<<<<<< HEAD
	std::string *recognized_hand_gesture;
	
=======
>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
    // hand closed (red) rectangle
    const auto rect = &(cc->Inputs().Tag(normRectTag).Get<NormalizedRect>());
    float width = rect->width();
    float height = rect->height();
	float rot = rect->rotation();
<<<<<<< HEAD
	char cur = '\u0000';

    if (width < 0.01 || height < 0.01)
    {
        LOG(INFO) << "No Hand Detected";
		recognized_hand_gesture = new std::string("");
        cc->Outputs()
            .Tag(recognizedHandGestureTag)
            .Add(recognized_hand_gesture, cc->InputTimestamp());
        return ::mediapipe::OkStatus();
    }
	/*recognized_hand_gesture = new std::string("Please call me ");
	cc->Outputs()
        .Tag(recognizedHandGestureTag)
        .Add(recognized_hand_gesture, cc->InputTimestamp());
    return ::mediapipe::OkStatus();*/
=======

    

>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
    const auto &landmarkList = cc->Inputs()
                                   .Tag(normalizedLandmarkListTag)
                                   .Get<mediapipe::NormalizedLandmarkList>();
    RET_CHECK_GT(landmarkList.landmark_size(), 0) << "Input landmark vector is empty.";

	
	float l0x= landmarkList.landmark(0).x();
	float l0y= landmarkList.landmark(0).y();
	float l0z= landmarkList.landmark(0).z();
	
	float l1x= landmarkList.landmark(1).x();
	float l1y= landmarkList.landmark(1).y();
	float l1z= landmarkList.landmark(1).z();
	
	float l2x= landmarkList.landmark(2).x();
	float l2y= landmarkList.landmark(2).y();
	float l2z= landmarkList.landmark(2).z();
	
	float l3x= landmarkList.landmark(3).x();
	float l3y= landmarkList.landmark(3).y();
	float l3z= landmarkList.landmark(3).z();
	
	float l4x= landmarkList.landmark(4).x();
	float l4y= landmarkList.landmark(4).y();
	float l4z= landmarkList.landmark(4).z();
	
	float l5x= landmarkList.landmark(5).x();
	float l5y= landmarkList.landmark(5).y();
	float l5z= landmarkList.landmark(5).z();
	
	float l6x= landmarkList.landmark(6).x();
	float l6y= landmarkList.landmark(6).y();
	float l6z= landmarkList.landmark(6).z();
	
	float l7x= landmarkList.landmark(7).x();
	float l7y= landmarkList.landmark(7).y();
	float l7z= landmarkList.landmark(7).z();
	
	float l8x= landmarkList.landmark(8).x();
	float l8y= landmarkList.landmark(8).y();
	float l8z= landmarkList.landmark(8).z();
	
	float l9x= landmarkList.landmark(9).x();
	float l9y= landmarkList.landmark(9).y();
	float l9z= landmarkList.landmark(9).z();
	
	float l10x= landmarkList.landmark(10).x();
	float l10y= landmarkList.landmark(10).y();
	float l10z= landmarkList.landmark(10).z();
	
	float l11x= landmarkList.landmark(11).x();
	float l11y= landmarkList.landmark(11).y();
	float l11z= landmarkList.landmark(11).z();
	
	float l12x= landmarkList.landmark(12).x();
	float l12y= landmarkList.landmark(12).y();
	float l12z= landmarkList.landmark(12).z();
	
	float l13x= landmarkList.landmark(13).x();
	float l13y= landmarkList.landmark(13).y();
	float l13z= landmarkList.landmark(13).z();
	
	float l14x= landmarkList.landmark(14).x();
	float l14y= landmarkList.landmark(14).y();
	float l14z= landmarkList.landmark(14).z();
	
	float l15x= landmarkList.landmark(15).x();
	float l15y= landmarkList.landmark(15).y();
	float l15z= landmarkList.landmark(15).z();
	
	float l16x= landmarkList.landmark(16).x();
	float l16y= landmarkList.landmark(16).y();
	float l16z= landmarkList.landmark(16).z();
	
	float l17x= landmarkList.landmark(17).x();
	float l17y= landmarkList.landmark(17).y();
	float l17z= landmarkList.landmark(17).z();
	
	float l18x= landmarkList.landmark(18).x();
	float l18y= landmarkList.landmark(18).y();
	float l18z= landmarkList.landmark(18).z();
	
	float l19x= landmarkList.landmark(19).x();
	float l19y= landmarkList.landmark(19).y();
	float l19z= landmarkList.landmark(19).z();
	
	float l20x= landmarkList.landmark(20).x();
	float l20y= landmarkList.landmark(20).y();
	float l20z= landmarkList.landmark(20).z();
	/*
	LOG(INFO) << "\n\n";
	
	LOG(INFO) << "Landmark 0 coordinates : " << l0x <<"\t"<<l0y<<"\t"<<l0z;
	LOG(INFO) << "Landmark 1 coordinates : " << l1x <<"\t"<<l1y<<"\t"<<l1z;
	LOG(INFO) << "Landmark 2 coordinates : " << l2x <<"\t"<<l2y<<"\t"<<l2z;
	LOG(INFO) << "Landmark 3 coordinates : " << l3x <<"\t"<<l3y<<"\t"<<l3z;
	LOG(INFO) << "Landmark 4 coordinates : " << l4x <<"\t"<<l4y<<"\t"<<l4z;
	LOG(INFO) << "Landmark 5 coordinates : " << l5x <<"\t"<<l5y<<"\t"<<l5z;
	LOG(INFO) << "Landmark 6 coordinates : " << l6x <<"\t"<<l6y<<"\t"<<l6z;
	LOG(INFO) << "Landmark 7 coordinates : " << l7x <<"\t"<<l7y<<"\t"<<l7z;
	LOG(INFO) << "Landmark 8 coordinates : " << l8x <<"\t"<<l8y<<"\t"<<l8z;
	LOG(INFO) << "Landmark 9 coordinates : " << l9x <<"\t"<<l9y<<"\t"<<l9z;
	LOG(INFO) << "Landmark 10 coordinates : " << l10x <<"\t"<<l10y<<"\t"<<l10z;
	LOG(INFO) << "Landmark 11 coordinates : " << l11x <<"\t"<<l11y<<"\t"<<l11z;
	LOG(INFO) << "Landmark 12 coordinates : " << l12x <<"\t"<<l12y<<"\t"<<l12z;
	LOG(INFO) << "Landmark 13 coordinates : " << l13x <<"\t"<<l13y<<"\t"<<l13z;
	LOG(INFO) << "Landmark 14 coordinates : " << l14x <<"\t"<<l14y<<"\t"<<l14z;
	LOG(INFO) << "Landmark 15 coordinates : " << l15x <<"\t"<<l15y<<"\t"<<l15z;
	LOG(INFO) << "Landmark 16 coordinates : " << l16x <<"\t"<<l16y<<"\t"<<l16z;
	LOG(INFO) << "Landmark 17 coordinates : " << l17x <<"\t"<<l17y<<"\t"<<l17z;
	LOG(INFO) << "Landmark 18 coordinates : " << l18x <<"\t"<<l18y<<"\t"<<l18z;
	LOG(INFO) << "Landmark 19 coordinates : " << l19x <<"\t"<<l19y<<"\t"<<l19z;
	LOG(INFO) << "Landmark 20 coordinates : " << l20x <<"\t"<<l20y<<"\t"<<l20z;
	
<<<<<<< HEAD
	LOG(INFO) << "\n\n";*/
	
	
	
	//LOG(INFO) << rot;
	
	char orientation = 'n';
	if(rot<0.5 && rot>-0.5)
		orientation = 'u';
	else if(rot<-0.5 && rot>-1.5)
		orientation = 'l';
	else if(rot<-1.5)
		orientation = 'd';
	
	if(orientation == 'n') {
		return ::mediapipe::OkStatus();
	}
	
	//LOG(INFO) << orientation;
	
	if(orientation=='u' && l4y<l3y && l8y<l7y && l12y<l11y && l16y<l15y && l20y<l19y) {
		recognized_hand_gesture = new std::string(" ");
		cur = ' ';
	}
	
	if(orientation=='u' && l6y<l7y&&l6y<l8y&&l10y<l11y&&l10y<l12y&&l14y<l15y&&l14y<l16y&&l18y<l19y&&l18y<l20y) {
		if(l4y>l8y||l4y>l12y||l4y>l16y||l4y>l20y) {
			recognized_hand_gesture = new std::string("E");
			cur = 'E';
			LOG(INFO) << "E";
			//return ::mediapipe::OkStatus();
		}
		else {
			if(l4x<l6x) {
				recognized_hand_gesture = new std::string("A");
				cur = 'A';
				LOG(INFO) << "A";
				//return ::mediapipe::OkStatus();
			}
			else if(l4z<l7z || l4z<l11z || l4z<l15z) {
				recognized_hand_gesture = new std::string("S");
				cur = 'S';
				LOG(INFO) << "S";
				//return ::mediapipe::OkStatus();
			}
			else if((l4y<l10y && l4y<l6y) && (l4x<l10x)) {
				recognized_hand_gesture = new std::string("T");
				cur = 'T';
				LOG(INFO) << "T";
				//return ::mediapipe::OkStatus();
			}
		}
	}
	else if(orientation=='u' && l2x<l4x && l16y>l15y && l16y>l14y && l20y>l19y && l20y>l18y && l8y<l7y && l8y<l6y && l12y<l11y && l12y<l10y) {
		float d812 = get_Euclidean_DistanceAB(l8x, l8y, l12x, l12y);
		float d711 = get_Euclidean_DistanceAB(l7x, l7y, l11x, l11y);
		if(d812 > 0.1) {
			recognized_hand_gesture = new std::string("V");
			cur = 'V';
			LOG(INFO) << "V";
			//return ::mediapipe::OkStatus();
		}
		else if(l7z<l11z) {
			recognized_hand_gesture = new std::string("R");
			cur = 'R';
			LOG(INFO) << "R";
			//return ::mediapipe::OkStatus();
		}
		else if(d711 < 0.1) {
			recognized_hand_gesture = new std::string("U");
			cur = 'U';
			LOG(INFO) << "U";
			//return ::mediapipe::OkStatus();
		}
	}
	else if(orientation=='u' && get_Euclidean_DistanceAB(l4x, l4y, l12x, l12y)<0.1 && get_Euclidean_DistanceAB(l4x, l4y, l16x, l16y)<0.1 && get_Euclidean_DistanceAB(l4x, l4y, l20x, l20y)<0.1 && l8y<l7y && l8y<l6y) {
		recognized_hand_gesture = new std::string("D");
		cur = 'D';
		LOG(INFO) << "D";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='u' && l12y>l11y && l12y>l10y && l16y>l15y && l16y>l14y && l20y>l19y && l20y>l18y && l4x>l5x) {
		if(l8y<l7y && l8y<l6y && abs(l8z-l7z)>5) {
			recognized_hand_gesture = new std::string("X");
			cur = 'X';
			LOG(INFO) << "X";
			//return ::mediapipe::OkStatus();
		}
		else if(l8y<l7y && l8y<l6y) {
			recognized_hand_gesture = new std::string("Z");
			cur = 'Z';
			LOG(INFO) << "Z";
			//return ::mediapipe::OkStatus();
		}
	}
	else if(orientation=='u' && l20y<l19y && l20y<l18y && l16y<l15y && l16y<l14y && l12y<l11y && l12y<l10y && l8y>l7y && l8y>l6y && l4x>l5x) {
		recognized_hand_gesture = new std::string("F");
		cur = 'F';
		LOG(INFO) << "F";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='u' && l20y<l19y && l20y<l18y && l16y<l15y && l16y<l14y && l12y<l11y && l12y<l10y && l8y<l7y && l8y<l6y && l4x>l5x) {
		recognized_hand_gesture = new std::string("B");
		cur = 'B';
		LOG(INFO) << "B";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='u' && l20y<l19y && l20y<l18y && l16y>l15y && l16y>l14y && l12y>l11y && l12y>l10y && l8y>l7y && l8y>l6y && l4x>l5x) {
		recognized_hand_gesture = new std::string("I");
		cur = 'I';
		LOG(INFO) << "I";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='l' && l20x<l19x && l20x<l18x && l16x>l15x && l16x>l14x && l12x>l11x && l12x>l10x && l8x>l7x && l8x>l6x && l4y>l5y) {
		recognized_hand_gesture = new std::string("J");
		cur = 'J';
		LOG(INFO) << "J";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='l' && l20x>l19x && l20x>l18x && l16x>l15x && l16x>l14x && l12x>l11x && l12x>l10x && l8x<l7x && l8x<l6x && l4x<l5x) {
		recognized_hand_gesture = new std::string("G");
		cur = 'G';
		LOG(INFO) << "G";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='l' && l20x>l19x && l20x>l18x && l16x>l15x && l16x>l14x && l12x<l11x && l12x<l10x && l8x<l7x && l8x<l6x && l4x<l5x) {
		recognized_hand_gesture = new std::string("H");
		cur = 'H';
		LOG(INFO) << "H";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='u' && l4x>l5x && l8y<l7y && l8y<l6y && l12y<l11y && l12y<l10y && l16y<l15y && l16y<l14y && l20y>l19y && l20y>l18y) {
		recognized_hand_gesture = new std::string("W");
		cur = 'W';
		LOG(INFO) << "W";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='u' && l4x<l5x && l8y>l7y && l8y>l6y && l12y>l11y && l12y>l10y && l16y>l15y && l16y>l14y && l20y<l19y && l20y<l18y) {
		recognized_hand_gesture = new std::string("Y");
		cur = 'Y';
		LOG(INFO) << "Y";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='l' && l20x<l17x && l16x<l13x && l12x<l9x && l8x<l5x && l4x<l2x) {
		float d48 = get_Euclidean_DistanceAB(l4x, l4y, l8x, l8y);
		if(d48<0.2) {
			recognized_hand_gesture = new std::string("O");
			cur = 'O';
			LOG(INFO) << "O";
			//return ::mediapipe::OkStatus();
		}
		else {
			recognized_hand_gesture = new std::string("C");
			cur = 'C';
			LOG(INFO) << "C";
			//return ::mediapipe::OkStatus();
		}
	}
	else if(orientation=='u' && l4x<l5x && l16y>l15y && l16y>l14y && l20y>l19y && l20y>l18y && l8y<l7y && l8y<l6y && l12y<l11y && l12y<l10y) {
		recognized_hand_gesture = new std::string("K");
		cur = 'K';
		LOG(INFO) << "K";
		//return ::mediapipe::OkStatus();
	}
    else if(orientation=='u' && l4x<l5x && l16y>l15y && l16y>l14y && l20y>l19y && l20y>l18y && l8y<l7y && l8y<l6y && l12y>l11y && l12y>l10y) {
		recognized_hand_gesture = new std::string("L");
		cur = 'L';
		LOG(INFO) << "L";
		//return ::mediapipe::OkStatus();
	}
	else if(orientation=='d') {
		recognized_hand_gesture = new std::string("");
		cur = '\u0000';
		LOG(INFO) << "Downward Gesture";
	}
	
	if(text.size()>0) {
		char prev = text[text.size()-1];
		if(prev!=cur) {
			text.push_back(cur);
		}
	}
	else {
		text.push_back(cur);
	}
	
	recognized_hand_gesture = new std::string(text);
	LOG(INFO) << text;
	cc->Outputs()
        .Tag(recognizedHandGestureTag)
        .Add(recognized_hand_gesture, cc->InputTimestamp());
=======
	LOG(INFO) << "\n\n";
	*/
	if (width < 0.01 || height < 0.01)
    {
        LOG(INFO) << "No Hand Detected";
        return ::mediapipe::OkStatus();
    }
	
	if(l6y<l7y&&l6y<l8y&&l10y<l11y&&l10y<l12y&&l14y<l15y&&l14y<l16y&&l18y<l19y&&l18y<l20y) {
		if(l4y>l8y||l4y>l12y||l4y>l16y||l4y>l20y) {
			LOG(INFO) << "E";
			return ::mediapipe::OkStatus();
		}
		else {
			if(l4x<l6x) {
				LOG(INFO) << "A";
				return ::mediapipe::OkStatus();
			}
			else if(l4z<l7z || l4z<l11z || l4z<l15z) {
				LOG(INFO) << "S";
				return ::mediapipe::OkStatus();
			}
			else if((l4y<l10y && l4y<l6y) && (l4x<l10x)) {
				LOG(INFO) << "T";
				return ::mediapipe::OkStatus();
			}
		}
	}
	else if(l2x<l4x && l16y>l15y && l16y>l14y && l20y>l19y && l20y>l18y && l8y<l7y && l8y<l6y && l12y<l11y && l12y<l10y) {
		float d812 = get_Euclidean_DistanceAB(l8x, l8y, l12x, l12y);
		float d711 = get_Euclidean_DistanceAB(l7x, l7y, l11x, l11y);
		if(d812 > 0.1) {
			LOG(INFO) << "V";
			return ::mediapipe::OkStatus();
		}
		else if(l7z<l11z) {
			LOG(INFO) << "R";
			return ::mediapipe::OkStatus();
		}
		else if(d711 < 0.1) {
			LOG(INFO) << "U";
			return ::mediapipe::OkStatus();
		}
	}
	else if(get_Euclidean_DistanceAB(l4x, l4y, l12x, l12y)<0.1 && get_Euclidean_DistanceAB(l4x, l4y, l16x, l16y)<0.1 && get_Euclidean_DistanceAB(l4x, l4y, l20x, l20y)<0.1 && l8y<l7y && l8y<l6y) {
		LOG(INFO) << "D";
		return ::mediapipe::OkStatus();
	}
	else if(l12y>l11y && l12y>l10y && l16y>l15y && l16y>l14y && l20y>l19y && l20y>l18y && l4x>l5x) {
		if(l8y<l7y && l8y<l6y && abs(l8z-l7z)>5) {
			LOG(INFO) << "X";
			return ::mediapipe::OkStatus();
		}
		else if(l8y<l7y && l8y<l6y) {
			LOG(INFO) << "Z";
			return ::mediapipe::OkStatus();
		}
	}
	else if(l20y<l19y && l20y<l18y && l16y<l15y && l16y<l14y && l12y<l11y && l12y<l10y && l8y>l7y && l8y>l6y && l4x>l5x) {
		LOG(INFO) << "F";
		return ::mediapipe::OkStatus();
	}
	else if(l20y<l19y && l20y<l18y && l16y<l15y && l16y<l14y && l12y<l11y && l12y<l10y && l8y<l7y && l8y<l6y && l4x>l5x) {
		LOG(INFO) << "B";
		return ::mediapipe::OkStatus();
	}
	else if(l20y<l19y && l20y<l18y && l16y>l15y && l16y>l14y && l12y>l11y && l12y>l10y && l8y>l7y && l8y>l6y && l4x>l5x) {
		LOG(INFO) << "I";
		return ::mediapipe::OkStatus();
	}
	else if(l20x<l19x && l20x<l18x && l16x>l15x && l16x>l14x && l12x>l11x && l12x>l10x && l8x>l7x && l8x>l6x && l4y>l5y) {
		LOG(INFO) << "J";
		return ::mediapipe::OkStatus();
	}
	else if(l20x>l19x && l20x>l18x && l16x>l15x && l16x>l14x && l12x>l11x && l12x>l10x && l8x<l7x && l8x<l6x && l4x<l5x) {
		LOG(INFO) << "G";
		return ::mediapipe::OkStatus();
	}
	else if(l20x>l19x && l16x>l15x && l12x<l11x && l8x<l7x && l4x>l5x) {
		LOG(INFO) << "H";
		return ::mediapipe::OkStatus();
	}
	else if(l20x<l17x && l16x<l13x && l12x<l9x && l8x<l5x && l4x<l2x) {
		float d48 = get_Euclidean_DistanceAB(l4x, l4y, l8x, l8y);
		if(d48<0.1) {
			LOG(INFO) << "O";
			return ::mediapipe::OkStatus();
		}
		else {
			LOG(INFO) << "C";
			return ::mediapipe::OkStatus();
		}
	}
>>>>>>> 3a7d6a46c987f0ce67fc909c3c407a9997a71478
    return ::mediapipe::OkStatus();
}

}
#include "Result.h"

Result::Result()
{
}

void Result::Updata()
{
	
}

void Result::Draw()
{
	MatrixScreenPrint(0, 0, rotateXMatrix);
	MatrixScreenPrint(0, kRowHeight * 5, rotateYMatrix);
	MatrixScreenPrint(0, kRowHeight * 5 * 2, rotateZMatrix);
	MatrixScreenPrint(0, kRowHeight * 5 * 3, rotateXYZMatrix);
}

//void Result::Start()
//{
//	Matrix4x4 rotateXMatrix = Multiply(rotateXMatrix, Multiply(rotateYMatrix, rotateZMatrix));
//}
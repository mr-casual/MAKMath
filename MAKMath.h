//
//  MAKMath.h
//  MAKToolKit
//
//  Created by Martin Kloepfel on 06.12.14.
//  Copyright (c) 2014 Martin Klöpfel. All rights reserved.
//

#ifndef HolidayCheck_iPhone_MAKMath_h
#define HolidayCheck_iPhone_MAKMath_h

/** Linear interpolation from <code>v0</code> to <code>v1</code>, with the parameter <code>t</code>
 @note Precise method which guarantees <code>v == v1</code> when <code>t = 1</code>.
 @param v0 The first value
 @param v1 The second value
 @param t The interpolation factor<br>Use a value between 0 and 1!
 @return An interpolation between two inputs (<code>v0</code>, <code>v1</code>) for a parameter <code>t</code> in the closed unit interval [0,1]
 */
CG_INLINE CGFloat lerp(CGFloat v0, CGFloat v1, CGFloat t)
{
    return (1-t)*v0 + t*v1;
}

/** Calculate the distance form point A to point B.
 @param a Point A
 @param b Point B
 @return The distance between the two given points
 */
CG_INLINE CGFloat dist(CGPoint a, CGPoint b)
{
    return sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
}

/** Returns an affine transformation matrix constructed from the translation and rotation value you provide.
 @param tx The value by which to move the x-axis of the coordinate system.
 @param ty The value by which to move the y-axis of the coordinate system.
 @param angle The angle, in radians, by which this matrix rotates the coordinate system axes.
 @return A new affine transform matrix.
 */
CG_INLINE CGAffineTransform CGAffineTransformMakeTranslationWithRotation(CGFloat tx, CGFloat ty, CGFloat angle)
{
    return CGAffineTransformMake(cos(angle), sin(angle), -sin(angle), cos(angle), tx, ty);
}

#endif

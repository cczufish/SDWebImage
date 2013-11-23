//
//  UIImage+Color.h
//  RenRenMusic
//
//  Created by jianting liu on 12-6-13.
//  Copyright (c) 2012年 renren-inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImage (color)

+ (UIImage *)colorizeImage:(UIImage *)baseImage withColor:(UIColor *)theColor;
+ (UIImage *)maskImage:(UIImage *)baseImage withImage:(UIImage *)theMaskImage;

@end

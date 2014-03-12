//
//  EasyImage.h
//  EasyImage
//
//  Created by liaojinxing on 14-3-6.
//  Copyright (c) 2014年 jinxing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Resize)

/* Scale the image and clip it if it is too large.
   Example: Destination size: (320, 480)
   Origin image size: (160, 300)
                                  scale                  clip
   Process the image: (160, 300) --------> (320, 600) ---------> (320, 480)
 */
- (UIImage *)scaleAndClipToFillSize:(CGSize)destSize;

/* Crop image in the rectangle*/
- (UIImage *)cropImageInRect:(CGRect)rect;

@end

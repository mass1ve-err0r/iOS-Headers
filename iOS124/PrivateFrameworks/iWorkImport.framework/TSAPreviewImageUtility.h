//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSAPreviewImageUtility : NSObject
{
}

+ (struct CGImage *)newPrerenderedImageFromImage:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;
+ (struct CGImage *)newPrerenderedImageFromImage:(struct CGImage *)arg1;
+ (void)drawInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 image:(struct CGImage *)arg3 imageSize:(struct CGSize)arg4 scaledSize:(struct CGSize)arg5 scale:(double)arg6 flip:(_Bool)arg7;
+ (id)scaleImage:(struct CGImage *)arg1 toSize:(struct CGSize)arg2 scale:(double)arg3;
+ (_Bool)imageIsOpaque:(struct CGImage *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface PLJPEGDataImage : UIImage
{
    NSData *_plData;
}

+ (id)pl_imageWithStoredJPEGData:(id)arg1;
- (void)dealloc;
- (struct CGImage *)CGImage;
- (id)pl_imageJPEGData;

@end


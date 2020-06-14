//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMColorSpaceCommand : CAMCaptureCommand
{
    long long __colorSpace;
}

@property(readonly, nonatomic) long long _colorSpace; // @synthesize _colorSpace=__colorSpace;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorSpace:(long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration
{
    _Bool _discardsLateVideoFrames;
    _Bool _derivedFromPreview;
}

@property(nonatomic) _Bool derivedFromPreview; // @synthesize derivedFromPreview=_derivedFromPreview;
@property(nonatomic) _Bool discardsLateVideoFrames; // @synthesize discardsLateVideoFrames=_discardsLateVideoFrames;
- (int)sinkType;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end


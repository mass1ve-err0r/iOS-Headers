//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment
{
    CDStruct_0a65202a buffer;
}

+ (CDStruct_0a65202a)copyFromCVPixelBuffer:(struct __CVBuffer *)arg1;
- (CDStruct_0a65202a)copyAsEspressoBuffer;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;

@end


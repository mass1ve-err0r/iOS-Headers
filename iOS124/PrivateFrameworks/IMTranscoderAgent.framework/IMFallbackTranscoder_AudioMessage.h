//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMFallbackTranscoder_AudioMessage : NSObject
{
}

- (void)_failWithOSStatusErrorCode:(int)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tmpOutputFileURL;
- (void)transcodeOpusFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end


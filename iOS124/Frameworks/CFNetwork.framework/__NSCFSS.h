//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSCFSS : NSObject
{
    CDUnknownBlockType _capturedStreams;
    CDUnknownFunctionPointerType _trustEval;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)connectionEstablished:(id)arg1 outputStream:(id)arg2;
- (void)completeWithError:(id)arg1;
- (_Bool)shouldTrust:(struct __SecTrust *)arg1;
- (void)dealloc;
- (id)initWithTrustChallenge:(CDUnknownFunctionPointerType)arg1 capture:(CDUnknownBlockType)arg2;

@end


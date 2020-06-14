//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMDDController : NSObject
{
    NSObject<OS_dispatch_queue> *_scannerQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)scanMessage:(id)arg1 waitUntilDone:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2;
- (void)scanMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)scannerQueue;
- (struct __DDScanner *)sharedScanner;
- (id)init;

@end


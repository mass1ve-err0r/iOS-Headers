//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <C2/NSObject-Protocol.h>

@class C2Session, C2SessionTask, NSError;

@protocol C2SessionTaskDelegate <NSObject>
- (void)C2Session:(C2Session *)arg1 task:(C2SessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
@end


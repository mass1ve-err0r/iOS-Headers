//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSError;

@protocol SXVideoAdStateReporting <NSObject>
- (void)skip;
- (void)learnMore;
- (void)finish;
- (void)failWithError:(NSError *)arg1;
- (void)pause;
- (void)play;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FACATransitionObserver : NSObject
{
    NSString *_stateName;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
- (void).cxx_destruct;
- (id)initWithStateName:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


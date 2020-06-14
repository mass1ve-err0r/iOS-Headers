//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTransaction;
@protocol SBUIAnimationControllerCoordinating;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject
{
    BSTransaction<SBUIAnimationControllerCoordinating> *_coordinatingChildTransaction;
    unsigned long long _schedulingPolicy;
}

@property(readonly, nonatomic) unsigned long long schedulingPolicy; // @synthesize schedulingPolicy=_schedulingPolicy;
@property(readonly, nonatomic) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction; // @synthesize coordinatingChildTransaction=_coordinatingChildTransaction;
- (void).cxx_destruct;
- (id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end


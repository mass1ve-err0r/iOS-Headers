//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, REDonatedAction;

@interface _REActionValue : NSObject
{
    NSMutableSet *_mutableUUIDs;
    REDonatedAction *_action;
}

@property(readonly, nonatomic) REDonatedAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)removeActionWithUUID:(id)arg1;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSSet *uuids;
- (id)initWithAction:(id)arg1;

@end


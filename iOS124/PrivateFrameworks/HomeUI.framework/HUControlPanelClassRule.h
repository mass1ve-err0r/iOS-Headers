//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlPanelRule-Protocol.h>

@class NSString, Protocol;

@interface HUControlPanelClassRule : NSObject <HUControlPanelRule>
{
    double _priority;
    Class _class;
    Protocol *_protocol;
}

+ (id)ruleWithControlItemProtocol:(id)arg1;
+ (id)ruleWithControlItemClass:(Class)arg1;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) Class class; // @synthesize class=_class;
@property(nonatomic) double priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (_Bool)ruleMatchesItem:(id)arg1;
- (id)initWithControlItemClass:(Class)arg1 protocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


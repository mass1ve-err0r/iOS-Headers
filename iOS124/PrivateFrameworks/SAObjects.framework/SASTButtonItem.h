//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText, SAUILocalImageResource;
@protocol SASTTemplateAction;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>
{
}

+ (id)buttonItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)buttonItem;
@property(copy, nonatomic) NSString *position;
@property(retain, nonatomic) SAUILocalImageResource *localImageResource;
@property(retain, nonatomic) SAUIDecoratedText *decoratedLabel;
@property(nonatomic) _Bool centered;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


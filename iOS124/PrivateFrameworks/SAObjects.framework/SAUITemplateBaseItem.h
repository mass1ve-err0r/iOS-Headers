//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAUITemplateItem-Protocol.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>
{
}

+ (id)baseItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseItem;
@property(nonatomic) _Bool shouldBeOffscreenInPartial;
@property(copy, nonatomic) NSArray *presentationOptions;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property(nonatomic) _Bool hasPriorityLayout;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property(copy, nonatomic) NSArray *communicationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


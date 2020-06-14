//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponent.h>

#import <Silex/SXTextComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;
@protocol SXComponentAnchor;

@interface SXTextComponent : SXComponent <SXTextComponent>
{
}

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (id)typeString;
@property(readonly, nonatomic) unsigned long long traits;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions;
@property(readonly, nonatomic) SXJSONDictionary *analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) SXComponentConditions *conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) SXJSONArray *inlineTextStyles; // @dynamic inlineTextStyles;
@property(readonly, nonatomic) NSString *layout;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *text; // @dynamic text;
@property(readonly, nonatomic) NSString *textStyle; // @dynamic textStyle;
@property(readonly, nonatomic) NSString *type;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>
{
}

+ (id)competingTeamPlayDetailHeaderItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)competingTeamPlayDetailHeaderItem;
@property(retain, nonatomic) SAUIDecoratedText *secondTeam;
@property(retain, nonatomic) SAUIDecoratedText *firstTeam;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


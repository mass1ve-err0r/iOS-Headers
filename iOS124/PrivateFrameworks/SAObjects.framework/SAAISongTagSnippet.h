//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class SAAISongTag, SAMPPlaybackButton, SAUIAppPunchOut;

@interface SAAISongTagSnippet : SAUISnippet
{
}

+ (id)songTagSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)songTagSnippet;
@property(retain, nonatomic) SAAISongTag *songTag;
@property(retain, nonatomic) SAUIAppPunchOut *songDetailsPunchOut;
@property(retain, nonatomic) SAUIAppPunchOut *purchaseSongPunchOut;
@property(retain, nonatomic) SAMPPlaybackButton *playbackButton;
@property(retain, nonatomic) SAUIAppPunchOut *attributionPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


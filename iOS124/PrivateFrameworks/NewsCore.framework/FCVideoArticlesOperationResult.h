//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColor, FCColorGradient, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@interface FCVideoArticlesOperationResult : NSObject
{
    NSArray *_headlines;
    NSString *_channelID;
    NSString *_titleText;
    FCColor *_titleColor;
    NSString *_subtitleText;
    FCColorGradient *_backgroundColorGradient;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NSString *_mutingChannelID;
}

@property(readonly, copy, nonatomic) NSString *mutingChannelID; // @synthesize mutingChannelID=_mutingChannelID;
@property(copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property(copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) FCColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
- (void).cxx_destruct;
- (id)initWithVideoGroupConfig:(id)arg1 headlines:(id)arg2;

@end


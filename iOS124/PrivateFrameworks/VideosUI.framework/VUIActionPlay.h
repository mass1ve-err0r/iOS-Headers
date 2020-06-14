//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSArray, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionPlay : VUIAction
{
    _Bool _upNextPlayback;
    NSDictionary *_contextData;
    NSArray *_videosPlayables;
    IKAppContext *_appContext;
    NSDate *_userPlaybackInitiationDate;
    NSDate *_openURLCompletionDate;
}

+ (void)_presentPlaybackWithMediaInfo:(id)arg1 extrasInfo:(id)arg2 playbackContext:(unsigned long long)arg3 appContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_preflightWithMediaInfo:(id)arg1 playbackContext:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_playMediaInfo:(id)arg1 extrasInfo:(id)arg2 appContext:(id)arg3 playbackContext:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)playMediaInfo:(id)arg1 appContext:(id)arg2 playbackContext:(unsigned long long)arg3;
+ (void)_playPlayables:(id)arg1 storeDictionary:(id)arg2 appContext:(id)arg3 isUpNextPlayback:(_Bool)arg4 userPlaybackInitiationDate:(id)arg5 openURLCompletionDate:(id)arg6;
+ (void)playPlayables:(id)arg1 storeDictionary:(id)arg2 appContext:(id)arg3 isUpNextPlayback:(_Bool)arg4 userPlaybackInitiationDate:(id)arg5;
@property(retain, nonatomic) NSDate *openURLCompletionDate; // @synthesize openURLCompletionDate=_openURLCompletionDate;
@property(retain, nonatomic) NSDate *userPlaybackInitiationDate; // @synthesize userPlaybackInitiationDate=_userPlaybackInitiationDate;
@property(nonatomic, getter=isUpNextPlayback) _Bool upNextPlayback; // @synthesize upNextPlayback=_upNextPlayback;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *videosPlayables; // @synthesize videosPlayables=_videosPlayables;
@property(retain, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
- (void).cxx_destruct;
- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMFallbackTranscoder_AudioMessage;

@interface IMFallbackTranscoder : NSObject
{
    IMFallbackTranscoder_AudioMessage *_audioTranscoder;
}

@property(retain, nonatomic) IMFallbackTranscoder_AudioMessage *audioTranscoder; // @synthesize audioTranscoder=_audioTranscoder;
- (void)_transcodeAudioMessageContents:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_transcodeAutoloopContents:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 inFileURL:(id)arg4 fallBack:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)_findPluginFallbackEncoder:(id)arg1 withBalloonBundleID:(id)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCSAudioFile-Protocol.h>

@class AVAudioFormat, NSString, NSURL, RCSSavedRecordingAccessToken;

__attribute__((visibility("hidden")))
@interface _RCSAudioFile : NSObject <RCSAudioFile>
{
    RCSSavedRecordingAccessToken *_fileToken;
}

@property(retain, nonatomic) RCSSavedRecordingAccessToken *fileToken; // @synthesize fileToken=_fileToken;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioFormat *processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat;
@property(readonly, nonatomic) NSURL *url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


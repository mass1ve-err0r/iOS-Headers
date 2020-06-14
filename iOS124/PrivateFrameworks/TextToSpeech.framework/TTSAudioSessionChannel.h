//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSessionChannelDescription, NSString;

@interface TTSAudioSessionChannel : NSObject
{
    unsigned int _channelLabel;
    AVAudioSessionChannelDescription *_channel;
    NSString *_channelName;
    unsigned long long _channelNumber;
    NSString *_owningPortUID;
}

+ (id)convertChannels:(id)arg1;
+ (id)channelWithChannel:(id)arg1;
@property(retain, nonatomic) NSString *owningPortUID; // @synthesize owningPortUID=_owningPortUID;
@property(nonatomic) unsigned int channelLabel; // @synthesize channelLabel=_channelLabel;
@property(nonatomic) unsigned long long channelNumber; // @synthesize channelNumber=_channelNumber;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) AVAudioSessionChannelDescription *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end


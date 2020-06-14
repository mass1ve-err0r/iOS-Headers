//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObservation : NSObject
{
    _Bool _playing;
    NSString *_nowPlayingAppBundleIdentifier;
}

@property(copy, nonatomic) NSString *nowPlayingAppBundleIdentifier; // @synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUINowPlayingFeature-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature>
{
    _Bool _active;
    _Bool _autoRemove;
    _Bool _repeats;
    double _duration;
    id _userInfo;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic, getter=shouldAutoRemove) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>

@interface MPUTransportControl : NSObject <NSCopying>
{
    unsigned long long _numberOfAvailableSlotsInContainer;
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _supportsLongPress;
    _Bool _acceptsTapsWhenDisabled;
    int _group;
    long long _type;
}

+ (long long)_transportControlTypeForCommand:(unsigned int)arg1;
+ (id)_transportControlsForMediaRemoteCommands:(struct __CFArray *)arg1 withAllowedTransportControlTypes:(id)arg2 allowsDisabledControls:(_Bool)arg3;
+ (_Bool)_transportControlSupportsHighlightingForCommand:(unsigned int)arg1;
+ (_Bool)_transportControlAcceptsTapsWhenDisabledForType:(long long)arg1;
+ (int)_groupForTransportControlType:(long long)arg1;
+ (_Bool)_hasUnderlyingCommandForTransportControlType:(long long)arg1;
+ (id)_descriptionForTransportControlType:(long long)arg1;
+ (id)_descriptionForTransportControlGroup:(int)arg1;
+ (id)_createTransportControlForType:(long long)arg1 withMediaRemoteCommand:(struct _MRMediaRemoteCommandInfo *)arg2;
+ (void)_addTransportControl:(id)arg1 toTransportControlsArray:(id)arg2;
+ (id)transportControlWithType:(long long)arg1 group:(int)arg2;
+ (id)transportControlsForControlTypes:(id)arg1 withMediaRemoteCommands:(struct __CFArray *)arg2;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray *)arg1 controlsCount:(unsigned long long)arg2;
@property(nonatomic) _Bool acceptsTapsWhenDisabled; // @synthesize acceptsTapsWhenDisabled=_acceptsTapsWhenDisabled;
@property(nonatomic) _Bool supportsLongPress; // @synthesize supportsLongPress=_supportsLongPress;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) int group; // @synthesize group=_group;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (long long)_compare:(id)arg1 ordering:(long long)arg2;
- (long long)_priority;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithType:(long long)arg1 group:(int)arg2;

@end


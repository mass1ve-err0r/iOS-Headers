//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAlternateTrack.h>

@class NSLocale, NSString;

@interface MPAlternateTextTrack : MPAlternateTrack
{
    long long _type;
    NSString *_name;
    NSLocale *_locale;
    long long _tag;
}

+ (id)autoTrack;
+ (id)offTrack;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)_displayNameForName:(id)arg1;
- (id)displayName;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSLocale *locale;
@property(readonly, nonatomic) _Bool isInBand;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3;

@end


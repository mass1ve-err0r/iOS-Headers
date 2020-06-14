//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *mPreferredFormat;
    _Bool isDateOnly;
    _Bool isTimeOnly;
    OITSULocale *_locale;
}

@property(retain, nonatomic) OITSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) _Bool isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) _Bool isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=mPreferredFormat;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (void)dealloc;
- (id)init;

@end


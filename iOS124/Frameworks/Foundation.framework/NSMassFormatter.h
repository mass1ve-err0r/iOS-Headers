//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface NSMassFormatter : NSFormatter
{
    void *_formatter;
    _Bool _isForPersonMassUse;
    void *_reserved[2];
}

@property(getter=isForPersonMassUse) _Bool forPersonMassUse; // @synthesize forPersonMassUse=_isForPersonMassUse;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)stringFromKilograms:(double)arg1;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (id)unitStringFromKilograms:(double)arg1 usedUnit:(long long *)arg2;
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;
- (id)init;
- (long long)targetUnitFromKilograms:(double)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;

@end


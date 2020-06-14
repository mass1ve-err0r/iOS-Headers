//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUNumberSetting : NUSetting
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
@property(readonly) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void).cxx_destruct;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)validateNumber:(id)arg1 error:(out id *)arg2;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
@property(readonly) NSNumber *defaultValue;
- (id)description;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 attributes:(id)arg3;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end


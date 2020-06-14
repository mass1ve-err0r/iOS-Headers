//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema
{
    struct NSDictionary *_settings;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (struct NSArray *)schemaDependencies;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (_Bool)deserializeSettings:(id)arg1 fromDictionary:(id)arg2 error:(out id *)arg3;
- (_Bool)serializeSettings:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (id)deserializeAdjustment:(id)arg1 error:(out id *)arg2;
- (id)serializeAdjustment:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)modelForProperty:(id)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)copyAdjustment:(id)arg1;
- (id)copy:(id)arg1;
- (_Bool)validateSettings:(id)arg1 error:(out id *)arg2;
- (_Bool)validateAdjustment:(id)arg1 error:(out id *)arg2;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)validateSettings:(out id *)arg1;
- (_Bool)isValid:(out id *)arg1;
- (id)initWithIdentifier:(id)arg1 settings:(struct NSDictionary *)arg2 attributes:(id)arg3;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (long long)type;

@end


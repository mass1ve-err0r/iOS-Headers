//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UpdateMigratorConfiguration : NSObject
{
    NSString *_migratorType;
    NSMutableDictionary *_migratorValues;
    unsigned long long _attempts;
}

@property(readonly, nonatomic) NSString *migratorType; // @synthesize migratorType=_migratorType;
@property(readonly, nonatomic) unsigned long long attempts; // @synthesize attempts=_attempts;
- (void).cxx_destruct;
- (void)setMigratorValue:(id)arg1 forConfigurationKey:(id)arg2;
- (void)incrementAttempts;
- (id)copyMigratorValueForConfigurationKey:(id)arg1;
- (id)copyUserDefaultsRepresentation;
- (id)initWithUserDefaultsRepresentation:(id)arg1;
- (id)initWithMigratorType:(id)arg1;
- (id)init;

@end

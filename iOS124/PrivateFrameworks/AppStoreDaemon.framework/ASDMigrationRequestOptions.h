//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@interface ASDMigrationRequestOptions : ASDRequestOptions
{
    unsigned long long _migrationType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long migrationType; // @synthesize migrationType=_migrationType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMigrationType:(unsigned long long)arg1;

@end


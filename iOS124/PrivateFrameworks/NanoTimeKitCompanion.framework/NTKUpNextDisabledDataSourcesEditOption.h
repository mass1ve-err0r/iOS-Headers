//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption
{
    NSSet *_disabledBundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidOption;
- (id)_alphabeticallySortedIdentifiers;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedName;
- (id)dailySnapshotKey;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;

@end


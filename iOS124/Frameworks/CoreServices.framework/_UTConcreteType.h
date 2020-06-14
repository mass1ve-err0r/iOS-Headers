//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_UTType.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UTConcreteType : _UTType
{
    NSString *_identifier;
    NSSet *_pedigree;
}

+ (_Bool)supportsSecureCoding;
- (id)_pedigree;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 checkingParents:(_Bool)arg2;
- (id)_iconURL;
- (id)_kernelExtensionName;
- (id)_localizedDescriptionDictionary;
- (id)_unlocalizedDescription;
- (_Bool)_isAppleInternal;
- (_Bool)_isPublic;
- (_Bool)_isActive;
- (id)parentIdentifiers;
- (_Bool)conformsToTypeIdentifier:(id)arg1;
- (_Bool)conformsToType:(id)arg1;
- (id)referenceURL;
- (id)tagSpecification;
- (_Bool)isDeclared;
- (_Bool)isDynamic;
- (id)declaration;
- (id)declaringBundleURL;
- (id)version;
- (id)initWithIdentifier:(id)arg1 pedigree:(id)arg2;

@end


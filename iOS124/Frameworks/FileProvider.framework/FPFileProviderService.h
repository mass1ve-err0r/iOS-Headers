//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSString;

@interface FPFileProviderService : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_itemIdentifier;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(copy) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3 domainIdentifier:(id)arg4;

@end


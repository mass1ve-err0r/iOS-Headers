//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICStorePlatformResponse-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse>
{
    NSNumber *_accountIdentifier;
    NSNumber *_enqueuerAccountIdentifier;
    NSDate *_expirationDate;
    NSArray *_requestedItemIdentifiers;
    NSDictionary *_responseDictionary;
    NSString *_storefrontIdentifier;
}

@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSNumber *enqueuerAccountIdentifier; // @synthesize enqueuerAccountIdentifier=_enqueuerAccountIdentifier;
@property(readonly, copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (void)_enumerateResultDictionariesUsingBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;
- (id)itemForIdentifier:(id)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *allItems;
- (id)initWithURLResponse:(id)arg1 requestedItemIdentifiers:(id)arg2;
- (id)initWithResponseDictionary:(id)arg1 requestedItemIdentifiers:(id)arg2;
- (id)initWithResponseDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;
    NSMutableDictionary *_itemIDsByType;
}

@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)itemIdentifiersForItemType:(id)arg1;
@property(readonly, nonatomic) NSArray *allItemTypes;
- (void)addItemIdentifier:(id)arg1 forItemType:(id)arg2;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

@end


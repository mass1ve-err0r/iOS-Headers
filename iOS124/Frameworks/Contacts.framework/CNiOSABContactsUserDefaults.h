//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactsUserDefaults.h>

@class CNiOSABContactsUserDefaultsABWrapper, NSCache, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults
{
    NSMutableDictionary *_observerCountPerKey;
    NSCache *_valueCache;
    CNiOSABContactsUserDefaultsABWrapper *_abWrapper;
}

@property(readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper; // @synthesize abWrapper=_abWrapper;
@property(retain, nonatomic) NSCache *valueCache; // @synthesize valueCache=_valueCache;
@property(retain, nonatomic) NSMutableDictionary *observerCountPerKey; // @synthesize observerCountPerKey=_observerCountPerKey;
- (void).cxx_destruct;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (id)filteredGroupAndContainerIDs;
- (id)countryCode;
- (_Bool)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatPrefersNicknames:(_Bool)arg1;
- (_Bool)isShortNameFormatEnabled;
- (void)setShortNameFormatEnabled:(_Bool)arg1;
- (long long)shortNameFormat;
- (void)setShortNameFormat:(long long)arg1;
- (long long)sortOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (long long)newContactDisplayNameOrder;
- (long long)displayNameOrder;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)_unregisterObserverForKey:(id)arg1;
- (void)_registerObserverForKey:(id)arg1;
- (void)flushCache;
- (void)dealloc;
- (id)initWithABWrapper:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKAddedToDocumentContext.h>

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext
{
    struct __CFDictionary *mTableIDMap;
}

- (_Bool)syncChanges;
- (_Bool)uniqueBookmarks;
- (_Bool)autoUpdateSmartFields;
- (_Bool)wasPasted;
- (id)description;
- (void)setTableIDMap:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)tableIDMap;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NCSInternalSettingsManager : NSObject
{
    NSMutableArray *_complicationDefinitions;
    NPSManager *_syncManager;
    NSArray *_storedSettings;
    NSString *_selectedComplicationIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)_localizedNameForComplication:(id)arg1;
- (unsigned long long)_numberOfActiveComplications;
- (void)loadSettings;
- (id)complicationIdentifierForComplicationDefinitionAtIndex:(unsigned long long)arg1;
- (void)_saveSettings;
- (void)saveSettings;
- (id)complicationDefinitionForWatchKitIdentifier:(id)arg1;
- (id)complicationDefinitionForComplicationIdentifier:(id)arg1;
- (id)complicationDefinitionForAppBundleIdentifier:(id)arg1;
- (void)moveComplicationDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)enumerateAllComplicationDefinitionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateComplicationDefinitionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeComplicationDefinitionsInArray:(id)arg1;
- (void)addComplicationDefinition:(id)arg1;
@property(readonly, nonatomic) _Bool hasSettings;
@property(copy, nonatomic) NSString *selectedComplicationIdentifier;
- (id)init;

@end


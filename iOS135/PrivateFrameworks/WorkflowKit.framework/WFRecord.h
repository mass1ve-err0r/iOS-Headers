/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFRecord : NSObject <NSCopying> {
    NSDictionary * _allPropertiesByName;
    WFRecordDescriptor * _descriptor;
    NSMutableSet * _fetchedPropertyNames;
    NSMutableDictionary * _lastFetchedValues;
    NSMutableDictionary * _lastSavedOrFetchedValues;
    NSMutableSet * _modifiedPropertyNames;
    NSMutableSet * _modifiedPropertyNamesSinceLastSave;
}

@property (nonatomic, readonly) NSSet *allProperties;
@property (nonatomic, readonly) NSDictionary *allPropertiesByName;
@property (nonatomic, readonly) WFRecordDescriptor *descriptor;
@property (nonatomic, readonly) NSSet *fetchedProperties;
@property (nonatomic, readonly) NSMutableSet *fetchedPropertyNames;
@property (nonatomic, readonly) NSMutableDictionary *lastFetchedValues;
@property (nonatomic, readonly) NSMutableDictionary *lastSavedOrFetchedValues;
@property (nonatomic, readonly) NSSet *modifiedProperties;
@property (nonatomic, readonly) NSSet *modifiedPropertiesSinceLastSave;
@property (nonatomic, readonly) NSMutableSet *modifiedPropertyNames;
@property (nonatomic, readonly) NSMutableSet *modifiedPropertyNamesSinceLastSave;

+ (Class)allocateLeafClassForRecordClass:(Class)arg1 named:(id)arg2;
+ (id)defaultPropertyValues;
+ (id)ignoredPropertyNames;
+ (id)propertiesForClass:(Class)arg1;
+ (id)propertiesForClass:(Class)arg1 walkingSuperclassesUntilReaching:(Class)arg2;

- (void).cxx_destruct;
- (id)allProperties;
- (id)allPropertiesByName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithValues:(bool)arg1;
- (id)descriptor;
- (id)fetchedProperties;
- (id)fetchedPropertyNames;
- (id)init;
- (id)initWithDescriptor:(id)arg1 storage:(id)arg2 error:(id*)arg3;
- (id)initWithDescriptor:(id)arg1 storage:(id)arg2 properties:(id)arg3 error:(id*)arg4;
- (id)lastFetchedValues;
- (id)lastSavedOrFetchedValues;
- (void)loadFromStorage:(id)arg1;
- (void)loadFromStorage:(id)arg1 properties:(id)arg2;
- (void)markPropertyModifiedIfNecessary:(id)arg1;
- (id)modifiedProperties;
- (id)modifiedPropertiesSinceLastSave;
- (id)modifiedPropertyNames;
- (id)modifiedPropertyNamesSinceLastSave;
- (void)resetModifications:(bool)arg1;
- (bool)saveChangesToStorage:(id)arg1 error:(id*)arg2;
- (bool)saveProperties:(id)arg1 toStorage:(id)arg2 error:(id*)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)writeToStorage:(id)arg1 error:(id*)arg2;

@end

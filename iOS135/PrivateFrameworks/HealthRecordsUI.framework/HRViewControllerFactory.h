/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HRViewControllerFactory : NSObject <HRCategoryViewControllerFactory, HRConceptViewControllerFactory, HRRecordViewControllerFactory> {
    void profile;
}

@property (nonatomic, readonly) HRProfile *profile;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)makeAlphabeticalViewControllerForCategory:(id)arg1;
- (id)makeDetailViewControllerForRecord:(id)arg1;
- (id)makeSettingsViewController;
- (id)makeTimelineViewControllerForCategory:(id)arg1 showsInitialSearchBar:(bool)arg2;
- (id)makeViewControllerForCategory:(id)arg1;
- (id)makeViewControllerForConcept:(id)arg1 fromCategory:(id)arg2 highlightedRecordId:(id)arg3;
- (id)makeViewControllerForRecord:(id)arg1;
- (id)profile;

@end
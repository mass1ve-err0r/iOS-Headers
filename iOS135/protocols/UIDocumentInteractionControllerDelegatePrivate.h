/* Generated by RuntimeBrowser.
 */

@protocol UIDocumentInteractionControllerDelegatePrivate <UIDocumentInteractionControllerDelegate>

@optional

- (id)activityItemForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)additionalActivitiesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)documentInteractionControllerMarkupDismissActions:(UIDocumentInteractionController *)arg1;
- (UIImage *)documentInteractionControllerTransitionImageForPreview:(UIDocumentInteractionController *)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (NSArray *)excludedActivityTypesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (void)previewController:(QLPreviewController *)arg1 willMarkUpAtURL:(NSURL *)arg2;
- (UIPrintInfo *)printInfoForDocumentInteractionController:(UIDocumentInteractionController *)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFEmailContactsTableViewController : UITableViewController {
    NSSet * _allContacts;
    <WFEmailContactsTableViewControllerDelegate> * _delegate;
    NSMutableSet * _selectedContacts;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSSet *allContacts;
@property (nonatomic) <WFEmailContactsTableViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *selectedContacts;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)allContacts;
- (void)cancel:(id)arg1;
- (id)delegate;
- (void)done:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 contacts:(id)arg2;
- (id)selectedContacts;
- (void)setAllContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedContacts:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)type;
- (void)viewDidLoad;

@end
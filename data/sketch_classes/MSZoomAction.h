@interface MSZoomAction : MSBaseAction
{
}
- (id)zoomValueString;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)zoomValueDidChange;
- (void)zoomModeToggle:(id)arg1;
- (id)zoomViewAtSize:(unsigned long long)arg1;
- (id)toolbarItemWithSize:(unsigned long long)arg1;
@end

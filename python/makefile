all: singleton \
	 builder

singleton:
	@echo "\n==== $@ ====\n"
	@$(MAKE) --no-print-directory -C Singleton

builder:
	@echo "\n==== $@ ====\n"
	@$(MAKE) --no-print-directory -C Builder

.PHONY: clean
clean:
	@$(MAKE) clean --no-print-directory -C Singleton
	@$(MAKE) clean --no-print-directory -C Builder
proton: ServiceSpec
pipeline:
  unit_test_command: echo 'add your unit test command here'
  packaging_command: make publish
instances:
  - name: s
    environment: lambda-env
